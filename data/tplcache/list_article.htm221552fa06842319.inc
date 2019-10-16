<?php
$z[0]=Array("field","",435,454);
$z[0][4]['name']="title";
$z[1]=Array("global","",455,481);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",522,551);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",591,649);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3315,3350);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3878,3900);
$z[5][4]['name']="typename";
$z[6]=Array("field","",5076,5098);
$z[6][4]['name']="position";
$z[7]=Array("list","\r\n                      <li><span class=\"float-right article-time\"><strong>[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</strong></span><a class=\"article-title\" href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n                      ",5617,5908);
$z[7][4]['pagesize']="20";
$z[8]=Array("pagelist","",6034,6100);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",6418,6802);
$z[9][4]['name']="typeid";
$z[9][4]['runphp']="yes";
$z[10]=Array("channel","\r\n                <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n                ",6910,7136);
$z[10][4]['type']="son";
$z[10][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[11]=Array("include","",7979,8014);
$z[11][4]['filename']="foot.htm";

?>