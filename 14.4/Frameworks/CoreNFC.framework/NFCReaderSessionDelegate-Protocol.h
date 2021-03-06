//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NFCReaderSession, NSArray, NSError;

@protocol NFCReaderSessionDelegate <NSObject>
- (void)readerSession:(NFCReaderSession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)readerSessionDidBecomeActive:(NFCReaderSession *)arg1;

@optional
- (void)readerSession:(NFCReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end

