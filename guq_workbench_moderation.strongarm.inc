<?php
/**
 * @file
 * guq_workbench_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function guq_workbench_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_myworkbench_disabled';
  $strongarm->value = FALSE;
  $export['workbench_myworkbench_disabled'] = $strongarm;

  return $export;
}
