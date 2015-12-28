<?php
/**
 * @file
 * cu_class_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_class_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cu_classes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cu_class';
  $view->human_name = 'Classes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  /* Field: Class: Class ID */
  $handler->display->display_options['fields']['class_id']['id'] = 'class_id';
  $handler->display->display_options['fields']['class_id']['table'] = 'cu_class';
  $handler->display->display_options['fields']['class_id']['field'] = 'class_id';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Class: COURSE_TITLE_LONG (field_class_course_title_long) */
  $handler->display->display_options['filters']['field_class_course_title_long_value']['id'] = 'field_class_course_title_long_value';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['table'] = 'field_data_field_class_course_title_long';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['field'] = 'field_class_course_title_long_value';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['group'] = 1;
  $handler->display->display_options['filters']['field_class_course_title_long_value']['expose']['operator_id'] = 'field_class_course_title_long_value_op';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['expose']['label'] = 'Keyword Search';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['expose']['operator'] = 'field_class_course_title_long_value_op';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['expose']['identifier'] = 'field_class_course_title_long_value';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    12 => 0,
    6 => 0,
    10 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_class_course_title_long_value']['group_info']['label'] = 'COURSE_TITLE_LONG (field_class_course_title_long)';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['group_info']['identifier'] = 'field_class_course_title_long_value';
  $handler->display->display_options['filters']['field_class_course_title_long_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_class_course_title_long_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Class: SSR_DESCRLONG (field_class_ssr_descrlong) */
  $handler->display->display_options['filters']['field_class_ssr_descrlong_value']['id'] = 'field_class_ssr_descrlong_value';
  $handler->display->display_options['filters']['field_class_ssr_descrlong_value']['table'] = 'field_data_field_class_ssr_descrlong';
  $handler->display->display_options['filters']['field_class_ssr_descrlong_value']['field'] = 'field_class_ssr_descrlong_value';
  $handler->display->display_options['filters']['field_class_ssr_descrlong_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_ssr_descrlong_value']['group'] = 1;
  /* Filter criterion: Class: SSR_INSTR_LONG (field_class_ssr_instr_long) */
  $handler->display->display_options['filters']['field_class_ssr_instr_long_value']['id'] = 'field_class_ssr_instr_long_value';
  $handler->display->display_options['filters']['field_class_ssr_instr_long_value']['table'] = 'field_data_field_class_ssr_instr_long';
  $handler->display->display_options['filters']['field_class_ssr_instr_long_value']['field'] = 'field_class_ssr_instr_long_value';
  $handler->display->display_options['filters']['field_class_ssr_instr_long_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_ssr_instr_long_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keyword Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    12 => 0,
    6 => 0,
    10 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Class: SUBJECT (field_class_subject) */
  $handler->display->display_options['filters']['field_class_subject_value']['id'] = 'field_class_subject_value';
  $handler->display->display_options['filters']['field_class_subject_value']['table'] = 'field_data_field_class_subject';
  $handler->display->display_options['filters']['field_class_subject_value']['field'] = 'field_class_subject_value';
  $handler->display->display_options['filters']['field_class_subject_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_subject_value']['group'] = 2;
  $handler->display->display_options['filters']['field_class_subject_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_subject_value']['expose']['operator_id'] = 'field_class_subject_value_op';
  $handler->display->display_options['filters']['field_class_subject_value']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_class_subject_value']['expose']['operator'] = 'field_class_subject_value_op';
  $handler->display->display_options['filters']['field_class_subject_value']['expose']['identifier'] = 'field_class_subject_value';
  $handler->display->display_options['filters']['field_class_subject_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    12 => 0,
    6 => 0,
    10 => 0,
    16 => 0,
  );
  /* Filter criterion: Class: CRSE_ATTR_VALUE (field_class_crse_attr_value) */
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['id'] = 'field_class_crse_attr_value_value';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['table'] = 'field_data_field_class_crse_attr_value';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['field'] = 'field_class_crse_attr_value_value';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['group'] = 2;
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['expose']['operator_id'] = 'field_class_crse_attr_value_value_op';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['expose']['label'] = 'Core Requirements';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['expose']['operator'] = 'field_class_crse_attr_value_value_op';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['expose']['identifier'] = 'field_class_crse_attr_value_value';
  $handler->display->display_options['filters']['field_class_crse_attr_value_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    12 => 0,
    6 => 0,
    10 => 0,
    16 => 0,
  );
  /* Filter criterion: Class: INSTRUCTION_MODE (field_class_instruction_mode) */
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['id'] = 'field_class_instruction_mode_value';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['table'] = 'field_data_field_class_instruction_mode';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['field'] = 'field_class_instruction_mode_value';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['group'] = 2;
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['expose']['operator_id'] = 'field_class_instruction_mode_value_op';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['expose']['operator'] = 'field_class_instruction_mode_value_op';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['expose']['identifier'] = 'field_class_instruction_mode_value';
  $handler->display->display_options['filters']['field_class_instruction_mode_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    12 => 0,
    6 => 0,
    10 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'courses/search';
  $export['cu_classes'] = $view;

  return $export;
}
