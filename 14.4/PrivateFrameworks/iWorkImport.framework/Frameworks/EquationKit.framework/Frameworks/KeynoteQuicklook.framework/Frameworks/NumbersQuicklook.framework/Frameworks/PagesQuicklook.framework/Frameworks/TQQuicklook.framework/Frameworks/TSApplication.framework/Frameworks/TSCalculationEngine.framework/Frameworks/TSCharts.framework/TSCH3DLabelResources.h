//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources
{
    NSMutableDictionary *mCache;
    TSCH3DTextureAtlas *mAtlas;
}

@property(readonly, nonatomic) TSCH3DTextureAtlas *atlas; // @synthesize atlas=mAtlas;
- (id)resourceAtIndex:(const tvec2_3b141483 *)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4;
- (void)setParagraphStyle:(id)arg1 forKey:(unsigned long long)arg2 atIndex:(const tvec2_3b141483 *)arg3;
- (void)setParagraphStyle:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (id)paragraphStyleForKey:(unsigned long long)arg1 defaultStyle:(id)arg2;
- (id)prepareTextureAtlasWithSamples:(float)arg1;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;

@end

