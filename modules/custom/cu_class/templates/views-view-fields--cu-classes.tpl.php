<?php
// Create class title
$class_title = $fields['field_class_course_title_long']->content . ' - Section ' . $fields['field_class_class_section']->content;

// Link class title to course page
$class_title_link = l($class_title, 'course/' . $fields['field_class_crse_id']->content, array('query' => array('class_id' => $fields['field_class_class_nbr']->content)));

// Dates
$start_date = $fields['field_class_start_dt']->content;
$end_date = $fields['field_class_end_dt']->content;
$updated = 'Updated: ' . $fields['field_class_last_updated']->content;

// Available seats
$cap = intval($fields['field_class_enrl_cap']->content);
$total = intval($fields['field_class_enrl_tot']->content);
$available = $cap - $total;
if ($available == 1) {
  $available_seats = $available . ' seat available';
} else {
  $available_seats = $available . ' seats available';
}

?>
<div class="class-view-mode-list class-entity-wrapper">
  <div class="class-wrapper">
    <h2 class="class-title"><?php print $class_title_link; ?></h2>
    <div class="class-content">
      <div class="row clearfix">
        <div class="class-meta class-section col-lg-6 col-md-6 col-sm-6 col-xs-12">
          <div class="row">
            <div class="class-section col-lg-6 col-md-6 col-sm-6 col-xs-12">
              <h3>Class No.</h3>
              <?php print $fields['field_class_class_nbr']->content; ?>
            </div>
            <div class="class-section col-lg-6 col-md-6 col-sm-6 col-xs-12">

              <h3>Core</h3>
              <?php print $fields['field_class_crse_attr_value']->content; ?>
            </div>
          </div>

        </div>
        <div class="class-date-instructor col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <div class="class-section">
            <h3>Course Dates</h3>
            <?php print $start_date; ?> - <?php print $end_date; ?>
          </div>
          <div class="class-section">
            <h3>Instructor</h3>
            <?php print $fields['field_class_ssr_instr_long']->content; ?>
          </div>

        </div>
        <div class="class-availability class-section col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <h3>Availability</h3>
          <?php print $available_seats; ?>
          <div class="updated">
            <?php print $updated; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
