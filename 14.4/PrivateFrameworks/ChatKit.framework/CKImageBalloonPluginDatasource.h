//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

__attribute__((visibility("hidden")))
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource
{
    CKMediaObject *_mediaObject;
    CKBalloonView *_balloonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)previewDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)imageBalloon;
- (void)dealloc;
- (id)initWithPluginPayload:(id)arg1;

@end

