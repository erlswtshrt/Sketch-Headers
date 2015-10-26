#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSPathControl, NSString, NSTextField, NSWindow;

@interface MSModalInputSheet : NSObject <NSWindowDelegate>
{
    NSWindow *panel;
    NSTextField *titleField;
    NSTextField *textField;
    NSTextField *numberField;
    NSPathControl *pathControl;
    BOOL finishedOK;
    long long _type;
    NSString *_label;
    double _numberFieldBinding;
}

@property(nonatomic) double numberFieldBinding; // @synthesize numberFieldBinding=_numberFieldBinding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (id)runPanelWithNibName:(id)arg1 ofType:(long long)arg2 initialString:(id)arg3 label:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

