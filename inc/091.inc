    <div class="tip">
	  You can use the <code>w</code> modifier to list only "window" functions with the
	  <code>\df</code> meta command.
      <pre><code class="hljs bash">laetitia=# \dfwS
                                       List of functions
   Schema   |     Name     | Result data type |          Argument data types          |  Type  
------------&#43;--------------&#43;------------------&#43;---------------------------------------&#43;--------
 pg_catalog | cume_dist    | double precision |                                       | window
 pg_catalog | dense_rank   | bigint           |                                       | window
 pg_catalog | first_value  | anyelement       | anyelement                            | window
 pg_catalog | lag          | anycompatible    | anycompatible, integer, anycompatible | window
 pg_catalog | lag          | anyelement       | anyelement                            | window
 pg_catalog | lag          | anyelement       | anyelement, integer                   | window
 pg_catalog | last_value   | anyelement       | anyelement                            | window
 pg_catalog | lead         | anycompatible    | anycompatible, integer, anycompatible | window
 pg_catalog | lead         | anyelement       | anyelement                            | window
 pg_catalog | lead         | anyelement       | anyelement, integer                   | window
 pg_catalog | nth_value    | anyelement       | anyelement, integer                   | window
 pg_catalog | ntile        | integer          | integer                               | window
 pg_catalog | percent_rank | double precision |                                       | window
 pg_catalog | rank         | bigint           |                                       | window
 pg_catalog | row_number   | bigint           |                                       | window
(15 rows)</code></pre>This feature is available
since Postgres 8.4.
	</div>
