//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNLSApplicationWorkspace-Protocol.h>

@class NSString;
@protocol CNSchedulerProvider;

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace>
{
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (id)remoteAdapter;
+ (id)inProcessLaunchServices;
+ (id)launchServices;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
- (void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

