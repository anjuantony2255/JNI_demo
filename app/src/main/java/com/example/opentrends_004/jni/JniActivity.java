package com.example.opentrends_004.jni;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;


import com.example.opentrends_004.jni_demo.R;

public class JniActivity extends Activity {

    private TextView tv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.jni_activity);
        tv  =  findViewById(R.id.sample_text);
         tv.setText(stringJNI());

    }

 public native String stringJNI();


}
