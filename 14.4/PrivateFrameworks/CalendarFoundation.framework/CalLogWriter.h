//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogWriter-Protocol.h>

@class NSString;
@protocol CalLogFormatter;

@interface CalLogWriter : NSObject <CalLogWriter>
{
    id <CalLogFormatter> _formatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CalLogFormatter> formatter; // @synthesize formatter=_formatter;
- (_Bool)flush;
- (void)write:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

