//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUDataRepresentation : NSObject
{
    _Bool mHasHash;
    unsigned int mHash;
    _Bool mHasSha1Hash;
    NSData *mSha1Hash;
}

- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)sha1Hash;
- (unsigned int)uint32Hash;
- (unsigned long long)hash;
- (unsigned long long)readIntoData:(id)arg1;
- (struct CGDataProvider *)cgDataProvider;
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;
- (struct _xmlTextReader *)xmlReaderForGzippedData;
- (struct _xmlTextReader *)xmlReaderWithReadCallback:(CDUnknownFunctionPointerType)arg1;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (_Bool)isEncrypted;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;

@end

