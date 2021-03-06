//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/KSWriter-Protocol.h>

@class NSString;
@protocol KSWriter;

@interface KSForwardingWriter : NSObject <KSWriter>
{
    id <KSWriter> _writer;
}

- (void).cxx_destruct;
- (void)writeString:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithOutputWriter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

