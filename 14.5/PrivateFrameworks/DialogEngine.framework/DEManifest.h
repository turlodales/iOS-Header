//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface DEManifest : NSObject
{
    _Bool _testOnly;
    NSString *_name;
    NSDictionary *_contents;
    NSData *_summary;
    NSData *_version;
    NSData *_keyVersion;
    unsigned long long _dirDownloadType;
    NSURL *_publicationURL;
    NSURL *_downloadURLPrefix;
}

+ (id)manifestWithContentsOfURL:(id)arg1;
+ (id)anyManifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2 filter:(id)arg3;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2 allowAllKeys:(_Bool)arg3 filter:(id)arg4;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2 filter:(id)arg3;
+ (id)anyManifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2 allowAllKeys:(_Bool)arg3 filter:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool testOnly; // @synthesize testOnly=_testOnly;
@property(retain, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property(retain, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property(nonatomic) unsigned long long dirDownloadType; // @synthesize dirDownloadType=_dirDownloadType;
@property(retain, nonatomic) NSData *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)writeToURL:(id)arg1;
- (_Bool)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3;
- (id)init;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 version:(id)arg5 keyVersion:(id)arg6;

@end

