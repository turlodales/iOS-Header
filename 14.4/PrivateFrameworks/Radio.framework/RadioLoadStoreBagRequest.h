//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest
{
    _Bool _ignoresRadioDiskCache;
}

@property(nonatomic) _Bool ignoresRadioDiskCache; // @synthesize ignoresRadioDiskCache=_ignoresRadioDiskCache;
- (void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

