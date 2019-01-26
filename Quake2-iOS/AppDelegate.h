//
//  AppDelegate.h
//  Quake2-iOS
//
//  Created by Tom Kidd on 1/26/19.
//

#import <UIKit/UIKit.h>
#import "../SDL/src/video/uikit/SDL_uikitappdelegate.h"

@class MainMenuViewController;

@interface AppDelegate : SDLUIKitDelegate {
    MainMenuViewController *mainViewController;     // required to dismiss the SettingsBaseViewController
    UIWindow *uiwindow;
}

@property (nonatomic, strong) MainMenuViewController *mainViewController;
@property (nonatomic, strong) UIWindow *uiwindow;

@end

