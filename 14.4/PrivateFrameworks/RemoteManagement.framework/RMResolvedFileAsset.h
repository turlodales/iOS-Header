//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset
{
    NSURL *_downloadedURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *downloadedURL; // @synthesize downloadedURL=_downloadedURL;
- (id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3;

@end

