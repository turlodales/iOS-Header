//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <IntentsUI/INUIVoiceShortcutRemoteHostingInterface-Protocol.h>

@class NSString;
@protocol INUIVoiceShortcutRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface>
{
    id <INUIVoiceShortcutRemoteViewControllerDelegate> _delegate;
    long long _mode;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)getViewControllerCompletion:(CDUnknownBlockType)arg1;
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_voiceShortcutUIExtension;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <INUIVoiceShortcutRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

