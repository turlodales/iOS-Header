//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface S3Content : NSObject
{
    NSData *_gzipContentCache;
    _Bool _gzip;
    NSString *_filename;
    NSString *_bucket;
    NSData *_content;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool gzip; // @synthesize gzip=_gzip;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)_gzipCompressData:(id)arg1;
@property(readonly, nonatomic) NSData *gzipContent;
@property(readonly, nonatomic) NSString *mimeType;
- (id)initWithContent:(id)arg1 filename:(id)arg2 bucket:(id)arg3 gzip:(_Bool)arg4;

@end

