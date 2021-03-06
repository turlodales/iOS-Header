//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>

@class LPAudioPlayButtonStyle, LPInlineMediaPlaybackInformation, LPPlayButtonControl;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView : LPComponentView <LPContentInsettable>
{
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets _contentInset;
    LPAudioPlayButtonStyle *_style;
}

- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutComponentView;
- (void)updateButton;
- (void)updateButtonForPodcast;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;
- (void)installAudioButton;
- (void)installPreviewButton;
- (void)installDisablediTunesButton;
- (void)installiTunesButton;
- (void)installPlaceholderButton;
- (id)theme;
- (void)dealloc;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;

@end

