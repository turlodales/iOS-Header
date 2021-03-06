//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKResourceDataConsumer-Protocol.h>

@class NSString;

@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer>
{
    _Bool _isLayeredImage;
    double _scale;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool isLayeredImage; // @synthesize isLayeredImage=_isLayeredImage;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)objectForData:(id)arg1 error:(id *)arg2;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 isLayeredImage:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

