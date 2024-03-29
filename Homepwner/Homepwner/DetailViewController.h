//
//  DetailViewController.h
//  Homepwner
//
//  Created by Markus Stolzenburg on 30.11.12.
//
//

#import <UIKit/UIKit.h>
@class BNRItem;


@interface DetailViewController : UIViewController {
    
    __weak IBOutlet UITextField *nameField;
    __weak IBOutlet UITextField *serialNumberField;
    __weak IBOutlet UITextField *valueField;
    __weak IBOutlet UILabel *dateLabel;
}

@property (nonatomic, strong) BNRItem *item;

@end
