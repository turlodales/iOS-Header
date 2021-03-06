//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "ApplicationLastActiveTimeProvider-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIApplicationDelegatePrivate-Protocol.h"
#import "UIApplicationTestingDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class ApplicationTester, CLLocationManager, MainWindowRootViewController, NSDate, NSString, RootNavigationController, UIWindow, UNUserNotificationCenter;

@interface Application : UIApplication <UIApplicationDelegatePrivate, UIApplicationTestingDelegate, UIAlertViewDelegate, CLLocationManagerDelegate, UNUserNotificationCenterDelegate, ApplicationLastActiveTimeProvider>
{
    ApplicationTester *_tester;
    CLLocationManager *_locationManager;
    _Bool _extendedLaunchCompleted;
    NSDate *_applicationLastActiveTime;
    CDUnknownBlockType _applicationRequestDelayer;
    UNUserNotificationCenter *_userNotificationCenter;
}

+ (_Bool)_diagnosticsAvailable;
+ (double)_resumeToTodayTimeout;
+ (void)_setModelDateForLaunch:(id)arg1 restoreLastViewedDateFromPreferenceIfNeeded:(_Bool)arg2;
+ (id)_setUpModel;
+ (id)createNewCalendarModel;
- (void).cxx_destruct;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(copy, nonatomic) CDUnknownBlockType applicationRequestDelayer; // @synthesize applicationRequestDelayer=_applicationRequestDelayer;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_buildCalendarSyncHashesForCalendars:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestLocationAuthorization;
- (void)_refreshAccountListAndViewContentsIfNeededForModel:(id)arg1;
@property(readonly, nonatomic) ApplicationTester *tester;
- (id)_findSomeCalendarModel;
- (id)_allSceneManagers;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_sceneManagerDidDismissSplashScreen;
- (_Bool)_showingSplashScreen;
- (void)_selectedCalendarSaveToPreferencesNotificationReceived:(id)arg1;
- (id)applicationLastActiveTime;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (void)applicationWillTerminate;
- (void)_applicationDidBecomeActive;
- (void)_persistActiveViewModeSettingToPreferences;
- (void)_applicationWillResignActive;
- (void)_applicationDidEnterBackground;
- (void)_extendedLaunchCompletedByView:(int)arg1;
- (void)_topMainViewControllerCompletedExtendedLaunch:(id)arg1;
- (void)_displayedOccurrencesChangedForTheFirstTime:(id)arg1;
- (int)_extractViewTypeFromUserInfo:(id)arg1 withKey:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)_extendLaunchTest;
- (id)init;
- (id)_rootViewControllerForModel:(id)arg1;
@property(readonly, nonatomic) MainWindowRootViewController *rootViewController;
- (id)_rootNavigationControllerForModel:(id)arg1;
@property(readonly, nonatomic) RootNavigationController *rootNavigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

