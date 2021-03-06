//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/_PUPickerRemoteUIViewControllerHostInterface-Protocol.h>
#import <PhotosUI/_PUPickerUnavailableUIViewControllerDelegate-Protocol.h>
#import <PhotosUI/_UIRemoteViewControllerContaining-Protocol.h>

@class NSExtension, NSString, PHPickerConfiguration, PUPickerRemoteUIViewController, _UIRemoteViewController;
@protocol NSCopying, PHPickerViewControllerDelegate;

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface>
{
    PHPickerConfiguration *_configuration;
    id <PHPickerViewControllerDelegate> _delegate;
    NSExtension *__extension;
    id <NSCopying> __extensionRequestIdentifier;
    PUPickerRemoteUIViewController *__remoteUIViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setRemoteUIViewController:) PUPickerRemoteUIViewController *_remoteUIViewController; // @synthesize _remoteUIViewController=__remoteUIViewController;
@property(copy, nonatomic, setter=_setExtensionRequestIdentifier:) id <NSCopying> _extensionRequestIdentifier; // @synthesize _extensionRequestIdentifier=__extensionRequestIdentifier;
@property(retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // @synthesize _extension=__extension;
@property(nonatomic) __weak id <PHPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) PHPickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)_pickerDidFinishPicking:(id)arg1;
- (void)_pickerUnavailableUIViewControllerRetryButtonTapped:(id)arg1;
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg1;
- (void)_addOrReplaceChildUnavailableUIViewController:(unsigned long long)arg1 error:(id)arg2;
- (void)_cancelExistingExtensionRequestIfPossible;
- (void)_handleRemoteViewControllerConnection:(id)arg1 extension:(id)arg2 extensionRequestIdentifier:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_setupRemoteViewControllerForExtension:(id)arg1 withExtensionItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupExtension:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setup:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

