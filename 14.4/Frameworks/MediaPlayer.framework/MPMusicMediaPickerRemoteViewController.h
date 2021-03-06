//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <MediaPlayer/MPMusicMediaPickerClientController-Protocol.h>

@class MPMediaPickerController, NSString;

@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController <MPMusicMediaPickerClientController>
{
    MPMediaPickerController *_mediaPickerController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)remoteMediaPickerDidCancel;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

