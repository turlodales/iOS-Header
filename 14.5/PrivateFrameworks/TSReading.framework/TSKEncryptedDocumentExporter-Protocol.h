//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKExporter-Protocol.h>

@class NSString;

@protocol TSKEncryptedDocumentExporter <TSKExporter>
- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional
- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
@end

