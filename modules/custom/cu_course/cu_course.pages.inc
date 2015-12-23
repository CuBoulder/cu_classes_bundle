<?php

/**
 * Class view callback.
 */
function cu_course_view($course) {
  //dsm($course);
  drupal_set_title(entity_label('cu_course', $course));
  return entity_view('cu_course', array(entity_id('cu_course', $course) => $course), 'full');
}
