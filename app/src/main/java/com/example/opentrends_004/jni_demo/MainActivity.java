package com.example.opentrends_004.jni_demo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.Button;
import android.view.View;
import android.content.Intent;

import com.example.opentrends_004.jni.JniActivity;

public class MainActivity extends AppCompatActivity  {

   private Button button;
   private TextView tv;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        init();

    }
    public void init(){

    tv =  findViewById(R.id.sample_text);
    tv.setText(stringFromJNI());
    button = findViewById(R.id.btn_click);
    button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
              Intent i = new Intent(MainActivity.this,JniActivity.class);
                startActivity(i);
            }
        });
    }

    public native String stringFromJNI();

    static {
        System.loadLibrary("native-lib");
        //System.loadLibrary("native-libjni");
    }

}
