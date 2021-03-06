//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoardUIServices/_SBUIPopoverExtensionHostInterface-Protocol.h>

@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>
{
    id <_SBUIPopoverExtensionHostDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_SBUIPopoverExtensionHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)__shouldRemoteViewControllerFenceOperations;
- (_Bool)_canShowWhileLocked;
- (void)_extensionRequestsDismiss;

@end

