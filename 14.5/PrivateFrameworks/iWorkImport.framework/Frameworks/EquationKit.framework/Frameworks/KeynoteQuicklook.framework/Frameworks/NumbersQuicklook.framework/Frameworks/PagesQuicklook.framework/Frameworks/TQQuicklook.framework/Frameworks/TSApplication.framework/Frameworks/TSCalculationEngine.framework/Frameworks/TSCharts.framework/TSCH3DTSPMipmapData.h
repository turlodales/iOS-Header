//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPMipmapData : NSObject
{
    TSCH3DTSPImageDataTexture *_parent;
    TSPData *_data;
}

+ (id)dataWithTSPData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSPData *data; // @synthesize data=_data;
- (id)databuffer;
- (void)setParent:(id)arg1;
- (id)initWithTSPData:(id)arg1;

@end

