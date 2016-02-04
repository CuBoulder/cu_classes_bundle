# CU Classes Bundle

The Classes Bundle incldes a few different components:
- cu_classes_bundle - Defines the secure_permissions and dependencies so the functionality can be added with https://www.drupal.org/project/profile_module_manager
- cu_course - Defines a course entity.  These are primarily used to group classes for import and display.
- cu_class - Defines the class entity.
- cu_class_fields - Feature export of fields.  Machine names match XML element names in API.  Additional fields can be added at admin/structure/class/manage/fields
- cu_class_views - Provides courses/search
- cu_class_import - Provides UI to import class data from UIS or Primer

# Getting Started

Configure importer at admin/config/system/class-import

Regarldess of whether you are using the UIS API or a Primer, you start the process of importing with courses.  Import courses by subject and term at courses/import

Once courses are populated, you can import classes for every course Drupal is aware of at class/import

Both class and course provide batch imports at courses/import/batch and class/import/batch.  

# Published vs. Unpublished

# Cancelled Classes





