//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject
{
    tvec2_3b141483 _size;
    float _samples;
    NSMutableArray *_labels;
    struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int>>> _positions;
    long long _currentxpos;
    long long _currentypos;
    long long _currentheight;
    TSCH3DTextureAtlasTextureResource *_resource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=_size;
- (id)resource;
- (id)getTextureDataBuffer;
- (tvec2_3b141483)addLabel:(id)arg1;
- (void)p_invalidateResource;
- (id)initWithSize:(tvec2_3b141483)arg1;

@end

