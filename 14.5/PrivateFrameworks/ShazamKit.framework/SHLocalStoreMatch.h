//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SHSignature;

__attribute__((visibility("hidden")))
@interface SHLocalStoreMatch : NSObject
{
    NSArray *_mediaItems;
    SHSignature *_signature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SHSignature *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (id)mediaItemDictionariesRepresentation;
@property(readonly, nonatomic) NSString *suggestedFilename;
- (id)initWithSignature:(id)arg1 representingMediaItems:(id)arg2;

@end

