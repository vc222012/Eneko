//
//  Eneko.h
//  Eneko
//
//  Fixed Memory Management & ARC Issues
//

#import <substrate.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import "GcUniversal/GcImagePickerUtils.h"
#import "../Preferences/PreferenceKeys.h"
#import "../Preferences/NotificationKeys.h"

// Интерфейсы (Hooks)
@interface CSCoverSheetViewController : UIViewController
- (void)adjustFrame;
@end

@interface SBIconController : UIViewController
- (void)adjustFrame;
@end

@interface CCUIModularControlCenterOverlayViewController : UIViewController
@end

@interface SBBacklightController : NSObject
@end

@interface SBLockScreenManager : NSObject
@end

@interface SpringBoard : UIApplication
@end

@interface SBMediaController : NSObject
@end

@interface TUCall : NSObject
@end

@interface SiriUIBackgroundBlurView : UIView
@end

@interface SBDashBoardCameraPageViewController : UIViewController
@end

@interface CSModalButton : UIButton
@end

@interface SBLockScreenEmergencyCallViewController : UIViewController
@end
