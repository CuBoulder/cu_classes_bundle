<?php if (isset($description)): ?>
<div class="course-description">
  <?php print $description; ?>
</div>
<?php endif; ?>
<?php if (!empty($cu_classes)): ?>
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
  <div class="express-course-classes block">
    <?php
      foreach ($cu_classes as $cu_class) {
        $cu_class['heading_tag'][1] = 'h2';
        $cu_class['heading_tag'][2] = 'h3';
        print theme('cu_courses_class', $cu_class);
      }
    ?>
  </div>
<?php endif; ?>
