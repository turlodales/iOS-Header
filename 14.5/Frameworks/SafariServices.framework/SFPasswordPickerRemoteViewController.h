//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFPasswordRemoteViewController.h>

#import <SafariServices/SFPasswordPickerRemoteViewControllerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController <SFPasswordPickerRemoteViewControllerProtocol>
{
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;
- (void)selectedCredential:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

