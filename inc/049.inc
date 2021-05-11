    <div class="tip">
	  By default, the <code>psql</code> prompt will display <code>#</code> if you're connected with
	  a super admin user or <code>></code> for a normal user.
      <pre><code class="hljs bash">laetitia=# \du 
                                   List of roles
 Role name |                         Attributes                         | Member of 
-----------&#43;------------------------------------------------------------&#43;-----------
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {}

test=# \c laetitia test
You are now connected to database "laetitia" as user "test".
laetitia=> \c laetitia laetitia
You are now connected to database "laetitia" as user "laetitia".
laetitia=#</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
