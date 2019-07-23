#
# Be sure to run `pod lib lint IIBLL.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IIBLL'
  s.version          = '0.2.18'
  s.summary          = 'IIIBLL - INTERFASE & PROTOCOL'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  IIIBLL:
  存储了所有业务模块的解耦接口
  引入了BeeHive
  IIIBLL - INTERFASE & PROTOCOL
                       DESC

  s.homepage         = 'https://github.com/hatjs880328s/IIBLL'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hatjs880328s' => 'shanwzh@inspur.com' }
  s.source           = { :git => 'https://github.com/hatjs880328s/IIBLL.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  # s.source_files = 'IIBLL/Classes/**/*'
  # s.resource = 'IIBLL/Classes/BeeHive/BeeHive.bundle'
  s.swift_version = '5.0'

  s.subspec 'BeeHive' do |ss|
      ss.source_files = 'IIBLL/Classes/BeeHive/*.{h,m}'
      ss.resource = 'IIBLL/Classes/BeeHive/BeeHive.bundle'
  end

  s.subspec 'IBLL' do |ss|
      ss.dependency 'IIBLL/BeeHive'
      ss.source_files = 'IIBLL/Classes/IBLL/**/*'
  end


  # s.static_framework = true
  # s.resource_bundles = {
  #   'IIBLL' => ['IIBLL/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'BeeHive'
  # s.frameworks = 'QuartzCore','UIKit'
end
