<?php

function cu_class_search_settings($form, $form_state) {
  $form = array();
  $options = array(
    'CUBLD' => 'Boulder',
    'CUSPG' => 'Colorado Springs',
    'CUDEV' => 'Denver',
  );
  $form['cu_class_search_campus'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#title' => 'Campus',
    '#description' => 'Choose which campuses are available in the search.',
    '#default_value' => variable_get('cu_class_search_campus', array()),
  );
  return system_settings_form($form);
}
