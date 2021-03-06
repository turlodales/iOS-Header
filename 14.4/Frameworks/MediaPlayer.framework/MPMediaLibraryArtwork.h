//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    struct os_unfair_lock_s _stateLock;
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (_Bool)needsToFetchArtworkForRequest:(id)arg1;
+ (_Bool)artworkExistsForRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) __weak MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property(copy, nonatomic) NSDictionary *effectsMetadata;
@property(readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;
- (id)imageFileURLForEffect:(id)arg1;
- (id)imageFileURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSURL *originalFileURL;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

