module.exports = function(grunt) {

	// Project configuration.
	grunt.initConfig({

		pkg: grunt.file.readJSON('package.json'),

		/**
		* Set project object
		*/
		project: {
			src: 'WebFolder',
			scss: ['<%= project.src %>/scss'],
			css: ['<%= project.src %>/css'],
			js: ['<%= project.src %>/js']
		},

		concat: {
			dist: {
				src: [
					'<%= project.src %>/bower_components/nouislider/distribute/jquery.nouislider.all.js',
					'<%= project.src %>/bower_components/imagesloaded/imagesloaded.pkgd.js',
					'<%= project.src %>/bower_components/masonry/dist/masonry.pkgd.js',
					'<%= project.src %>/bower_components/bootstrap-sass/assets/javascripts/bootstrap.js',
					//'<%= project.src %>/bower_components/magnific-popup/dist/jquery.magnific-popup.js',
					//'<%= project.src %>/bower_components/bootstrap-sass/assets/javascripts/bootstrap/transition.js',
					//'<%= project.src %>/bower_components/bootstrap-sass/assets/javascripts/bootstrap/collapse.js',
					'<%= project.src %>/js/plugins/05_core.js',
					'<%= project.src %>/js/plugins/10_transition.js',
					//'<%= project.src %>/js/plugins/15_lightbox.js',
					'<%= project.src %>/js/plugins/20_tooltip.js',
					'<%= project.src %>/js/plugins/bootstrap-tabs.js',
					'<%= project.src %>/js/plugins/jquery.fs.shifter.js',
					'<%= project.src %>/js/plugins/mediaquery.js',
					'<%= project.src %>/js/plugins/navigation.js',
					'<%= project.src %>/js/plugins/swap.js',
					'<%= project.src %>/js/plugins/touch.js',
					'<%= project.src %>/js/plugins/z-menubar.js',

					'<%= project.src %>/js/main.js'
				],
				dest: '<%= project.src %>/js/build/production.js'
			}
		},

		uglify: {
			build: {
				src: ['<%= project.src %>/js/build/production.js'],
				dest: '<%= project.src %>/js/build/production.min.js'
			}
		},

		sass: {
			dist: {
				options: {
					style: 'compressed',
					compass: true,
					loadPath: ['<%= project.src %>/bower_components/foundation/scss/','<%= project.src %>/bower_components/bootstrap-sass/assets/stylesheets']
				},
				files: {
					'<%= project.src %>/css/master.css': '<%= project.src %>/scss/master.scss',
					'Database/webfolder/css/master.css' : '<%= project.src %>/scss/master.scss',
					'<%= project.src %>/css/editor.css': '<%= project.src %>/scss/editor.scss'
				}
			}
		},

		imagemin: {
			dynamic: {
				files: [{
					expand: true,
					cwd: '<%= project.src %>/images/',
					src: ['**/*.{png,jpg,gif}'],
					dest: '<%= project.src %>/images/'
				}]
			}
		},

		watch: {
			options: {
				livereload: true,
			},
			scripts: {
				files: ['<%= project.src %>/js/*.js', '<%= project.src %>/js/**/*.js'],
				tasks: ['concat', 'uglify'],
				options: {
					spawn: false,
				}
			},
			css: {
				files: ['<%= project.src %>/scss/*.scss', '<%= project.src %>/scss/**/*.scss'],
				tasks: ['sass'],
				options: {
					spawn: false,
				}
			},
			markup: {
					files: ['<%= project.src %>/templates/**/*.ss', '<%= project.src %>/templates/**/*.php'],
					options: {
							livereload: true,
					}
			}
		},

	});

	// Load the plugin that provides the "uglify" task.
	grunt.loadNpmTasks('grunt-contrib-concat');
	grunt.loadNpmTasks('grunt-contrib-uglify');
	grunt.loadNpmTasks('grunt-contrib-sass');
	grunt.loadNpmTasks('grunt-contrib-imagemin');
	grunt.loadNpmTasks('grunt-contrib-watch');

	// Default task(s).
	grunt.registerTask('default', ['concat', 'uglify', 'sass', 'watch']);

};