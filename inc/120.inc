    <div class="tip">The <code> \ef function</code> metacommand will open the <code>create or
	replace function</code> (or <code>create or replace procedure</code>) containing the code of
	the function (or procedure) you named.<br/><br/>
	If there are several functions with the same name, you will need to add the
	signature of the function so psql knows which one needs modification.
      <pre><code class="hljs bash">laetitia=# \df add_em
                                 List of functions
 Schema |  Name  | Result data type |          Argument data types           | Type 
--------+--------+------------------+----------------------------------------+------
 public | add_em | double precision | x double precision, y double precision | func
 public | add_em | integer          | x integer, y integer                   | func
(2 rows)

laetitia=# \ef add_em
ERROR:  more than one function named "add_em"
laetitia=# \ef add_em(integer, integer)
No changes</code></pre>This feature is available
since Postgres 8.4. Procedures were added with Postgres 11.
	</div>
