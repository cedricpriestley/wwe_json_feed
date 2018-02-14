<?php
/**
* Implements hook_views_default_views().
**/
function wwe_json_feed_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'wwe_json_feed'). '/views', '/.view.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}