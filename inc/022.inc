    <div class="tip" name="22">
      The <code>-l</code> or <code>--list</code> flag will list the
      databases available on the server.
      <pre><code class="hljs bash">laetitia:~$ psql -l
                                  List of databases
   Name    |  Owner   | Encoding |   Collate   |    Ctype    |   Access privileges   
-----------&#43;----------&#43;----------&#43;-------------&#43;-------------&#43;-----------------------
 laetitia  | laetitia | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
 postgres  | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
 template0 | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/postgres          &#43;
           |          |          |             |             | postgres=CTc/postgres
 template1 | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/postgres          &#43;
           |          |          |             |             | postgres=CTc/postgres
 test      | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
(5 rows)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
