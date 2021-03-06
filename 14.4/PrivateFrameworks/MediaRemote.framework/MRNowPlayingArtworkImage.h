//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)description;
- (id)copyImageData;
- (_Bool)hasArtworkData;
- (unsigned int)type;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;

@end

