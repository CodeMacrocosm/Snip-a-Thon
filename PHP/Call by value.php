<?php  
function adder($str2)  
{  
    $str2 .= 'Call By Value';  
}  
$str = 'Hello ';  
adder($str);  
echo $str;  
?>
