<?php
require_once 'PHP/Archive/Creator.php';
require_once 'PHP/Archive/Manager.php';
chdir(dirname(__FILE__));
$creator = new PHP_Archive_Creator('index.php', 'filenotfound.phar');
$creator->addFile(dirname(dirname(__FILE__)) . DIRECTORY_SEPARATOR . 'filenotfoundtest.php', 'index.php');
$creator->savePhar(dirname(__FILE__) . DIRECTORY_SEPARATOR . 'filenotfound.phar');
@unlink($name);
$b = new PHP_Archive_Manager(dirname(__FILE__) . DIRECTORY_SEPARATOR . 'filenotfound.phar');
$b->dump();
?>