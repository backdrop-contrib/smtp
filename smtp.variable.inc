<?php
/**
 * @file
 * Custom integration with the Variable module.
 */

/**
 * Implements hook_variable_info().
 *
 * Allows for the SMTP from name to be translated if/when the Variable module is
 * enabled.
 *
 * @link http://api.drupalhelp.net/api/variable/variable.api.php/function/hook_variable_info/7
 * @param array $options
 */
function smtp_variable_info($options) {
  $variable['smtp_fromname'] = array (
    'title' => t('Email from name (SMTP module)'),
    'type' => 'string',
    'group' => 'smtp',
  );

  return $variable;
}
