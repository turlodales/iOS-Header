//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest
{
    NSURL *_sourceURL;
    NSMutableArray *_resizeDestinations;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *resizeDestinations; // @synthesize resizeDestinations=_resizeDestinations;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)debugDescription;
- (Class)operationClass;
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addJPEGDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;
- (void)addDestinationWithFormat:(long long)arg1 size:(struct CGSize)arg2 url:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;

@end

