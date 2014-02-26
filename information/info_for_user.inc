<?php

function info_for_user_page() {
  global $user;
  $text = 'Welcome ' . $user->name . '. Your uid is: ' . $user->uid . '. Your account was created on: ' . $user->created . '.';
  $page = array(
    '#type' => 'markup',
    '#markup' => t($text),
	);
    return $page;
}
