//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject
{
    MFPlainTextDocument *_inputDocument;
    unsigned int _encoding;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    unsigned int _addedTrailingSpaces:1;
    NSMutableString *_lineString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;
- (void).cxx_destruct;
- (_Bool)addedTrailingSpaces;
- (id)quotedString;
- (id)outputString;
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange)arg2 withQuoteLevel:(unsigned int)arg3;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(_Bool)arg3;

@end

