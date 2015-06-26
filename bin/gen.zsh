echo "Copy template files into xcode template directory"
echo "Also needs a permission for root user, if you trust me, please enter your password"

script_dir=$(cd $(dirname ${BASH_SOURCE:-$0}); pwd)
xcode_template_path="/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/File Templates/cocos2d-x/"

sudo mkdir -p "$xcode_template_path"
sudo cp -r "$script_dir/../Custom Class Template.xctemplate" "$xcode_template_path"
