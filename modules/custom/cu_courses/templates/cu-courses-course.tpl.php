<?php
  if ($type == 'node') {
    $tag1 = 'h2';
    $tag2 = 'h3';
    $tag3 = 'h4';
  }
  elseif ($type == 'block') {
    $tag1 = 'h3';
    $tag2 = 'h4';
    $tag3 = 'h5';
  }
?>
<div class="express-course" id="<?php print $course_id; ?>">
  <<?php print $tag1; ?> class="course-title"><?php print $course_title_link; ?></<?php print $tag1; ?>>
  <?php if (isset($display_options['description'])): ?>
  <p>
    <?php print $description; ?>
  </p>
<?php endif; ?>
  <?php if (!empty($cu_classes) && isset($display_options['classes'])): ?>
    <div class="class-headers" aria-hidden="true" role="presentation">
      <div class="row">
        <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12">
          <strong class="class-label">Section</strong>
        </div>
        <div class="col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <strong class="class-label">Instructor</strong>
        </div>
        <div class="col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <strong class="class-label">Schedule</strong>
        </div>
        <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12">
          <strong class="class-label">Building/Room</strong>
        </div>
        <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12">
          <strong class="class-label">Format</strong>
        </div>
      </div>
    </div>
    <div class="express-course-classes block <?php print $class_view; ?>">
      <?php
        foreach ($cu_classes as $cu_class) {
          $cu_class['heading_tag'][1] = $tag2;
          $cu_class['heading_tag'][2] = $tag3;
          print theme('cu_courses_class', $cu_class);
        }
      ?>
    </div>
  <?php endif; ?>
</div>
